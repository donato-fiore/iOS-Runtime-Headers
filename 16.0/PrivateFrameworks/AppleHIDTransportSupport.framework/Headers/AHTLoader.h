// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AHTLOADER_H
#define AHTLOADER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AHTLoader : NSObject

@property (nonatomic) unsigned int connect; // ivar: _connect
@property (readonly, nonatomic) unsigned int imageTag; // ivar: _imageTag
@property (readonly, nonatomic) unsigned int loadOrder; // ivar: _loadOrder
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int service; // ivar: _service


+(BOOL)errorFromKernel:(int)arg0 error:(*id)arg1 ;
+(id)allDevices;
+(id)withName:(id)arg0 ;
+(id)withService:(unsigned int)arg0 ;
-(BOOL)loadImage:(id)arg0 payloadOnly:(BOOL)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)open:(*id)arg0 ;
-(id)description;
-(id)initWithService:(unsigned int)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif