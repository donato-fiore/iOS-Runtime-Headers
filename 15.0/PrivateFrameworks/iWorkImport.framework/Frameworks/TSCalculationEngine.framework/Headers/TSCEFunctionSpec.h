// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEFUNCTIONSPEC_H
#define TSCEFUNCTIONSPEC_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCEFunctionSpec : NSObject {
    NSString *_functionName;
    vector<TSCEFunctionArgSpec, std::allocator<TSCEFunctionArgSpec>> _arguments;
    vector<TSCEFunctionArgSpec, std::allocator<TSCEFunctionArgSpec>> _repeatingArguments;
}


@property (readonly) *void arguments;
@property (readonly) unsigned short functionIndex; // ivar: _functionIndex
@property (readonly) NSString *functionName;
@property (readonly, nonatomic) BOOL isOperator; // ivar: _isOperator
@property (readonly, nonatomic) short maxArguments; // ivar: _maxArguments
@property (readonly, nonatomic) short minArguments; // ivar: _minArguments
@property (readonly, nonatomic) NSUInteger numArguments;
@property (readonly, nonatomic) short repeatingGroupSize; // ivar: _repeatingGroupSize
@property (readonly, nonatomic) int versionShippedIn; // ivar: _shipVersion


+(BOOL)hasAnyDateArgumentsToFunction:(unsigned short)arg0 ;
+(BOOL)isModeEnabled:(short)arg0 functionIndex:(short)arg1 ;
+(id)englishFunctionNameFromFunctionIndex:(unsigned short)arg0 ;
+(id)functionSpecForFunctionIndex:(unsigned short)arg0 ;
+(id)functionSpecForFunctionName:(id)arg0 ;
+(id)functionSpecList;
+(id)specWithFunctionName:(id)arg0 minArgs:(int)arg1 maxArgs:(int)arg2 repeatingGroupSize:(short)arg3 isOperator:(BOOL)arg4 shipVersion:(int)arg5 arguments:(*void)arg6 functionIndex:(unsigned short)arg7 ;
+(id)unsupportedFunctionNameForLocale:(id)arg0 ;
+(void)loadSpecDictionary;
-(*void)argumentSpecForIndex:(NSUInteger)arg0 ;
-(NSInteger)modeNumberForLocalizedString:(id)arg0 argumentSpecIndex:(NSUInteger)arg1 attributeMax:(NSInteger)arg2 locale:(id)arg3 ;
-(char)preferredTypeForArgumentIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)displayStringForLocale:(id)arg0 ;
-(id)initWithFunctionName:(id)arg0 minArgs:(int)arg1 maxArgs:(int)arg2 repeatingGroupSize:(short)arg3 isOperator:(BOOL)arg4 shipVersion:(int)arg5 arguments:(*void)arg6 functionIndex:(unsigned short)arg7 ;
-(id)localizedFunctionNameForLocale:(id)arg0 ;
-(id)localizedToolTipStringForLocale:(id)arg0 ;
-(id)nativeSyntaxStringForArgument:(int)arg0 ;
-(int)accessorModeForArgumentIndex:(NSUInteger)arg0 ;
-(void)loadRepeatingArguments;
-(void)p_ValidateArguments;


@end


#endif