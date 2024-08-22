// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEQUOTEDREFPATHSPLITTER_H
#define TSCEQUOTEDREFPATHSPLITTER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface TSCEQuotedRefPathSplitter : NSObject {
    NSMutableArray *_quotedComponents;
}


@property (nonatomic) BOOL forceSplitting; // ivar: _forceSplitting
@property (retain, nonatomic) NSString *localizedBlankGroupName; // ivar: _localizedBlankGroupName
@property (retain, nonatomic) NSString *localizedErrorGroupName; // ivar: _localizedErrorGroupName
@property (retain, nonatomic) NSString *localizedFalseGroupName; // ivar: _localizedFalseGroupName
@property (retain, nonatomic) NSString *localizedFalseGroupNameForColumn; // ivar: _localizedFalseGroupNameForColumn
@property (retain, nonatomic) NSString *localizedTrueGroupName; // ivar: _localizedTrueGroupName
@property (retain, nonatomic) NSString *localizedTrueGroupNameForColumn; // ivar: _localizedTrueGroupNameForColumn


+(BOOL)isColon:(id)arg0 ;
+(BOOL)isDollar:(id)arg0 ;
+(BOOL)isLeftParen:(id)arg0 ;
+(BOOL)isRightParen:(id)arg0 ;
+(BOOL)isSingleQuote:(id)arg0 ;
+(BOOL)isSingleQuotePair:(id)arg0 ch2:(id)arg1 ;
+(id)refPathInterestingCharactersSet;
-(NSUInteger)numComponents;
-(id)componentAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithComponents:(id)arg0 aggregateFunction:(id)arg1 ;
-(id)initWithReferenceString:(id)arg0 ;
-(void)addComponent:(id)arg0 ;
-(void)splitRefPath:(id)arg0 ;


@end


#endif