// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSDATACONTAINERDATADESTRUCTIONITEM_H
#define NSSDATACONTAINERDATADESTRUCTIONITEM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSSDataContainerDataDestructionItem : NSObject <NSCopying>



@property (nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (nonatomic) char * identifier; // ivar: _identifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContainerClass:(NSUInteger)arg0 identifier:(char *)arg1 ;


@end


#endif