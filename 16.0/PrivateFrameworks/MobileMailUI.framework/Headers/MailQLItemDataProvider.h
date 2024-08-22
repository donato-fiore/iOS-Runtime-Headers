// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAILQLITEMDATAPROVIDER_H
#define MAILQLITEMDATAPROVIDER_H

@class UTType, NSString, QLItem, NSURL;
@protocol QLPreviewItemDataProvider;

#import <Foundation/Foundation.h>


@interface MailQLItemDataProvider : NSObject <QLPreviewItemDataProvider>



@property (readonly, nonatomic) UTType *contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) QLItem *item;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 ;
-(id)provideDataForItem:(id)arg0 ;


@end


#endif