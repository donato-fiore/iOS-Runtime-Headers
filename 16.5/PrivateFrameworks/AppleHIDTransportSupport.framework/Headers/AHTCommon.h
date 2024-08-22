// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AHTCOMMON_H
#define AHTCOMMON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AHTCommon : NSObject

@property (readonly, nonatomic) unsigned int connect; // ivar: _connect
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int service; // ivar: _service


-(BOOL)getPower:(*NSInteger)arg0 ;
-(BOOL)open;
-(BOOL)reset;
-(BOOL)setPower:(NSInteger)arg0 ;
-(NSUInteger)registryID;
-(id)getBootLoader;
-(id)initWithService:(unsigned int)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif