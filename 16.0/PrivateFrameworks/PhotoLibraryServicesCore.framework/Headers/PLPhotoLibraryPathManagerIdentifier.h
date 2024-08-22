// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOLIBRARYPATHMANAGERIDENTIFIER_H
#define PLPHOTOLIBRARYPATHMANAGERIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLPhotoLibraryPathManagerIdentifier : NSObject <NSCopying>



@property (nonatomic) unsigned char bundleFormat; // ivar: _bundleFormat
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPathManagerIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLibraryID:(id)arg0 libraryFormat:(unsigned char)arg1 ;
-(id)initWithPathManager:(id)arg0 ;


@end


#endif