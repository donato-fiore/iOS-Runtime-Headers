// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSASPERSONMODELITEM_H
#define MSASPERSONMODELITEM_H

@class NSString;
@protocol NSCopying, NSObject;

#import <Foundation/Foundation.h>

#import "MSASAlbum.h"

@interface MSASPersonModelItem : NSObject <NSCopying>



@property (retain, nonatomic) MSASAlbum *album; // ivar: _album
@property (retain, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (nonatomic) int errorCount; // ivar: _errorCount
@property (retain, nonatomic) NSObject<NSObject> *object; // ivar: _object


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif