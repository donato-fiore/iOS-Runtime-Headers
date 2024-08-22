// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARPUPPETRECORD_H
#define AVTAVATARPUPPETRECORD_H

@class NSString;
@protocol AVTAvatarRecordInternal;

#import <Foundation/Foundation.h>


@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *puppetName; // ivar: _puppetName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)matchingIdentifierTest:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPuppet;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPuppetName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif