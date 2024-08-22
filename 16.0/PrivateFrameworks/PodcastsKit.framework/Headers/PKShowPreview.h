// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHOWPREVIEW_H
#define PKSHOWPREVIEW_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKShowPreview : NSObject

@property (copy, nonatomic) NSString *feedUrl; // ivar: _feedUrl
@property (copy, nonatomic) NSString *storeId; // ivar: _storeId
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


-(id)initWithTitle:(id)arg0 storeId:(id)arg1 feedUrl:(id)arg2 uuid:(id)arg3 ;


@end


#endif