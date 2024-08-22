// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLINDOORTILEEVICTIONPOLICY_H
#define CLINDOORTILEEVICTIONPOLICY_H

@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (nonatomic) BOOL forceClean; // ivar: _forceClean
@property (nonatomic) CGFloat maxModifiedAge; // ivar: _maxModifiedAge


+(BOOL)supportsSecureCoding;
-(BOOL)tileLastModified:(CGFloat)arg0 needsEvictionAt:(CGFloat)arg1 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif