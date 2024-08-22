// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSERVICEQUALITY_H
#define BSSERVICEQUALITY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BSServiceQuality : NSObject <NSCopying>

 {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}


@property (readonly, nonatomic) int relativePriority; // ivar: _relativePriority
@property (readonly, nonatomic) unsigned int serviceClass; // ivar: _serviceClass


+(id)background;
+(id)main;
+(id)serviceWithClass:(unsigned int)arg0 ;
+(id)serviceWithClass:(unsigned int)arg0 relativePriority:(int)arg1 ;
+(id)userInitiated;
+(id)userInteractive;
+(id)utility;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif