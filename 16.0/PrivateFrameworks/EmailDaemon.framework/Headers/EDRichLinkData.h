// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDRICHLINKDATA_H
#define EDRICHLINKDATA_H

@class NSData, NSNumber, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface EDRichLinkData : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSNumber *persistentID; // ivar: _persistentID
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)initWithPersistentID:(id)arg0 title:(id)arg1 url:(id)arg2 data:(id)arg3 ;
-(id)initWithTitle:(id)arg0 url:(id)arg1 data:(id)arg2 ;


@end


#endif