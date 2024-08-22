// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUSCRIPT_H
#define NUSCRIPT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface NUScript : NSObject

@property (retain) NSString *source; // ivar: _source
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)load:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithSource:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif