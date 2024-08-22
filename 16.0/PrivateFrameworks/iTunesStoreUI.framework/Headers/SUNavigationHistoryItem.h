// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUNAVIGATIONHISTORYITEM_H
#define SUNAVIGATIONHISTORYITEM_H

@class SSURLRequestProperties, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUNavigationHistoryItem : NSObject <NSCopying>



@property (readonly, nonatomic) SSURLRequestProperties *URLRequestProperties; // ivar: _urlRequestProperties
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif