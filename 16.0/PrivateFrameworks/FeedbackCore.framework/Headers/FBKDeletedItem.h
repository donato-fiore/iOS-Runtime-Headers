// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDELETEDITEM_H
#define FBKDELETEDITEM_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface FBKDeletedItem : NSObject

@property (retain, nonatomic) NSNumber *remoteID; // ivar: _remoteID
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithData:(id)arg0 ;


@end


#endif