// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNHANDLE_H
#define CNHANDLE_H

@class NSString;
@protocol CNHandle;

#import <Foundation/Foundation.h>


@interface CNHandle : NSObject <CNHandle>



@property (readonly, copy, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSInteger)geminiHandleTypeForType:(NSUInteger)arg0 ;
+(NSInteger)inPersonHandleTypeForType:(NSUInteger)arg0 ;
+(NSInteger)tuHandleTypeFromType:(NSUInteger)arg0 ;
+(NSUInteger)handleTypeForPropertyKey:(id)arg0 ;
+(id)geminiHandleForHandle:(id)arg0 ;
+(id)geminiHandleTypeMap;
+(id)inPersonHandleForHandle:(id)arg0 ;
+(id)inPersonHandleTypeMap;
+(id)keyTypeMapping;
+(id)tuHandleForHandle:(id)arg0 ;
+(id)tuHandleTypeMap;
-(id)initWithStringValue:(id)arg0 customIdentifier:(id)arg1 type:(NSUInteger)arg2 ;
-(id)initWithStringValue:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif