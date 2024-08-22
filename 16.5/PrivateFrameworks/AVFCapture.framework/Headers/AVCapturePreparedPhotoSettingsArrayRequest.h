// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREPREPAREDPHOTOSETTINGSARRAYREQUEST_H
#define AVCAPTUREPREPAREDPHOTOSETTINGSARRAYREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {
    NSUInteger _requestID;
    NSArray *_photoSettingsArray;
}


@property (nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly) id *completionHandler; // ivar: _completionHandler
@property (readonly) NSArray *photoSettingsArray;
@property (readonly) NSUInteger requestID;


+(id)preparedPhotoSettingsArrayRequestWithArray:(id)arg0 completionHandler:(id)arg1 ;
-(id)_initWithArray:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif