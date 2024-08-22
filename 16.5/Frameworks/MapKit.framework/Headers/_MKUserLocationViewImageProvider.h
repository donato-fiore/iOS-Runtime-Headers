// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKUSERLOCATIONVIEWIMAGEPROVIDER_H
#define _MKUSERLOCATIONVIEWIMAGEPROVIDER_H

@class CNContactStore, CNMonogrammer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MKUserLocationView.h"

@interface _MKUserLocationViewImageProvider : NSObject {
    _MKUserLocationView *_view;
    NSObject<OS_dispatch_queue> *_queue;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
}




-(id)_monogrammer;
-(id)init;
-(id)initWithUserLocationView:(id)arg0 ;
-(void)_contactsChanged:(id)arg0 ;
-(void)_updateContactImage;
-(void)_updateDefaultImage;
-(void)_updateImage;


@end


#endif