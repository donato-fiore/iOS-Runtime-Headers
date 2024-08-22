// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCCONTENTREPRESENTATION_H
#define APPCCONTENTREPRESENTATION_H

@class NSString;
@protocol APPCPromotableContentRepresentation;

#import <Foundation/Foundation.h>

#import "APPCTapAction.h"

@interface APPCContentRepresentation : NSObject <APPCPromotableContentRepresentation>

 {
    ? identifier;
}


@property (nonatomic, readonly) CGSize adSize; // ivar: adSize
@property (nonatomic, readonly) NSInteger adType; // ivar: adType
@property (nonatomic, readonly) NSInteger desiredPosition; // ivar: desiredPosition
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSInteger privacyMarkerPosition; // ivar: privacyMarkerPosition
@property (nonatomic, readonly) APPCTapAction *tapAction; // ivar: tapAction


-(id)init;
-(void)performActionWithCompletion:(id)arg0 ;


@end


#endif