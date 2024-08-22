// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UMLOGMESSAGE_H
#define UMLOGMESSAGE_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface UMLogMessage : NSObject

@property (readonly, nonatomic) NSString *privateString;
@property (retain, nonatomic) NSMutableArray *privateStrings; // ivar: _privateStrings
@property (readonly, nonatomic) NSString *publicString;
@property (retain, nonatomic) NSMutableArray *publicStrings; // ivar: _publicStrings


+(id)messageWithPrivateFormat:(id)arg0 ;
+(id)messageWithPrivateFormat:(id)arg0 arguments:(char *)arg1 ;
+(id)messageWithPublicFormat:(id)arg0 ;
+(id)messageWithPublicFormat:(id)arg0 arguments:(char *)arg1 ;
+(id)messageWithTask:(id)arg0 ;
+(id)messageWithTask:(id)arg0 privateFormat:(id)arg1 ;
+(id)messageWithTask:(id)arg0 publicFormat:(id)arg1 ;
+(id)messageWithUser:(id)arg0 ;
+(id)messageWithUser:(id)arg0 privateFormat:(id)arg1 ;
+(id)messageWithUser:(id)arg0 publicFormat:(id)arg1 ;
+(void)_addTaskInfoFrom:(id)arg0 toMessage:(id)arg1 ;
+(void)_addUserInfoFrom:(id)arg0 toMessage:(id)arg1 ;
-(id)_stringForArray:(id)arg0 ;
-(id)init;
-(void)addPrivateFormat:(id)arg0 ;
-(void)addPublicFormat:(id)arg0 ;


@end


#endif