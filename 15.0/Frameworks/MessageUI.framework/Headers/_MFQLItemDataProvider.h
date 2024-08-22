// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFQLITEMDATAPROVIDER_H
#define _MFQLITEMDATAPROVIDER_H

@class NSData, NSString, QLItem;
@protocol QLPreviewItemDataProvider;

#import <Foundation/Foundation.h>


@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider>

 {
    NSData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) QLItem *item; // ivar: _item
@property (readonly) Class superclass;


-(id)initWithData:(id)arg0 contentType:(id)arg1 previewTitle:(id)arg2 ;
-(id)provideDataForItem:(id)arg0 ;


@end


#endif