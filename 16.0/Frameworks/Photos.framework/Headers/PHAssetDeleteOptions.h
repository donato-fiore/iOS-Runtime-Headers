// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETDELETEOPTIONS_H
#define PHASSETDELETEOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PHAssetDeleteOptions : NSObject <NSCopying>



@property (nonatomic) BOOL shouldExpungeFromLocalStorageOnly; // ivar: _shouldExpungeFromLocalStorageOnly


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithXPCDict:(id)arg0 ;
-(void)encodeToXPCDict:(id)arg0 ;


@end


#endif