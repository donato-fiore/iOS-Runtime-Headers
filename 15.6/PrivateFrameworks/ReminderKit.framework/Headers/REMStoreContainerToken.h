// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSTORECONTAINERTOKEN_H
#define REMSTORECONTAINERTOKEN_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMStoreContainerToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif