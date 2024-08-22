// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETESHARINGPRIMITIVES_H
#define CRKCONCRETESHARINGPRIMITIVES_H

@protocol CRKSharingPrimitives;

#import <Foundation/Foundation.h>


@interface CRKConcreteSharingPrimitives : NSObject <CRKSharingPrimitives>





-(id)startAirDropTransferWithAutoAccept:(BOOL)arg0 hideProgress:(BOOL)arg1 senderName:(id)arg2 previewImageData:(id)arg3 bundleID:(id)arg4 sourceBundleID:(id)arg5 itemsDescription:(id)arg6 fileURLs:(id)arg7 resultHandler:(id)arg8 ;


@end


#endif