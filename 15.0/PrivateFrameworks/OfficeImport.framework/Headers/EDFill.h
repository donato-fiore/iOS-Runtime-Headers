// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDFILL_H
#define EDFILL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EDResources.h"

@interface EDFill : NSObject <NSCopying>

 {
    EDResources *mResources;
}




+(id)fillWithResources:(id)arg0 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithResources:(id)arg0 ;


@end


#endif