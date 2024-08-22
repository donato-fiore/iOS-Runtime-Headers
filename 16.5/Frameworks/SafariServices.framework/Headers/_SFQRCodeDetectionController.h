// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFQRCODEDETECTIONCONTROLLER_H
#define _SFQRCODEDETECTIONCONTROLLER_H

@class BCSQRCodeParser, NSMutableSet;
@protocol BCSAction;

#import <Foundation/Foundation.h>


@interface _SFQRCodeDetectionController : NSObject {
    BCSQRCodeParser *_QRCodeParser;
    id<BCSAction> *_lastDetectedAction;
    NSMutableSet *_cachedElements;
}




+(id)sharedController;
-(id)actionForElement:(id)arg0 ;
-(id)adjustedCopyActionForAction:(id)arg0 elementInfo:(id)arg1 ;
-(id)elementForAction:(id)arg0 ;
-(id)getActionForImageSynchronously:(id)arg0 userInfo:(*id)arg1 ;
-(id)init;
-(id)menuElementsForElementInfo:(id)arg0 ;
-(void)cacheElement:(id)arg0 ;
-(void)clearCachedElement:(id)arg0 ;
-(void)getActionForImage:(id)arg0 completion:(id)arg1 ;


@end


#endif