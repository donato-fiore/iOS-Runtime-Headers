// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADOBJECTCHANGEID_H
#define CADOBJECTCHANGEID_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADObjectChangeID : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger changeID; // ivar: _changeID
@property (readonly, nonatomic) int entityType; // ivar: _entityType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityType:(int)arg0 changeID:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif