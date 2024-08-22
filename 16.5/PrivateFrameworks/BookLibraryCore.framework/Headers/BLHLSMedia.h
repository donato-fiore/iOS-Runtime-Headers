// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLHLSMEDIA_H
#define BLHLSMEDIA_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface BLHLSMedia : NSObject

@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)description;
-(void)setPropertiesFromAttributeList:(id)arg0 ;


@end


#endif