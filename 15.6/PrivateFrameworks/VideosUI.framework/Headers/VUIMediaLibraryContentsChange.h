// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIALIBRARYCONTENTSCHANGE_H
#define VUIMEDIALIBRARYCONTENTSCHANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMediaLibraryContentsChange : NSObject <NSCopying>



@property (nonatomic) NSUInteger revision; // ivar: _revision


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRevision:(NSUInteger)arg0 ;


@end


#endif