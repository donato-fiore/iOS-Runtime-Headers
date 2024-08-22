// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMESSAGEACKNOWLEDGMENTDRAFTDESCRIPTOR_H
#define CKMESSAGEACKNOWLEDGMENTDRAFTDESCRIPTOR_H

@class UIColor, NSString;
@protocol CKMessageAcknowledgment;

#import <Foundation/Foundation.h>


@interface CKMessageAcknowledgmentDraftDescriptor : NSObject <CKMessageAcknowledgment>



@property (readonly, nonatomic) UIColor *acknowledgmentImageColor;
@property (readonly, nonatomic) NSString *acknowledgmentImageName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger messageAcknowledgmentType; // ivar: _messageAcknowledgmentType
@property (readonly, nonatomic) UIColor *selectedAcknowledgmentImageColor;
@property (readonly, nonatomic) UIColor *selectedBalloonColor;
@property (readonly) Class superclass;


+(id)acknowledgmentBarColor;
+(id)allMessageAcknowledgmentDescriptors;
-(NSInteger)themeColor;
-(id)initWithMessageAcknowledgmentType:(NSInteger)arg0 ;


@end


#endif