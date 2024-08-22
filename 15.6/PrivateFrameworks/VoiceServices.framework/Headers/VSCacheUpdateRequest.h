// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSCACHEUPDATEREQUEST_H
#define VSCACHEUPDATEREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSCacheUpdateRequest : NSObject {
    NSString *_modelID;
    NSString *_classID;
}




-(id)classIdentifier;
-(id)coalescedRequest:(id)arg0 ;
-(id)description;
-(id)initWithModelIdentifier:(id)arg0 classIdentifier:(id)arg1 ;
-(id)modelIdentifier;
-(void)dealloc;


@end


#endif