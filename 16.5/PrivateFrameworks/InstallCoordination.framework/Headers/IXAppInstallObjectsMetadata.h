// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXAPPINSTALLOBJECTSMETADATA_H
#define IXAPPINSTALLOBJECTSMETADATA_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface IXAppInstallObjectsMetadata : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (retain, nonatomic) NSHashTable *instances; // ivar: _instances


-(id)init;
-(void)addObject:(id)arg0 ;


@end


#endif