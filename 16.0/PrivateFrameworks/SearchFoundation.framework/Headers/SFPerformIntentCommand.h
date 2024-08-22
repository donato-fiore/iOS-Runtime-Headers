// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFPERFORMINTENTCOMMAND_H
#define SFPERFORMINTENTCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFPerformIntentCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFPerformIntentCommand : SFCommand <SFPerformIntentCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *intentMessageData; // ivar: _intentMessageData
@property (copy, nonatomic) NSString *intentMessageName; // ivar: _intentMessageName
@property (nonatomic) BOOL isRunnableWorkflow; // ivar: _isRunnableWorkflow
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasIsRunnableWorkflow;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif