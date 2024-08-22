// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTARCHIVERBASEDSTOREROOT_H
#define AVTARCHIVERBASEDSTOREROOT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVTArchiverBasedStoreRoot : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *domains; // ivar: _domains
@property (readonly, copy, nonatomic) NSArray *records; // ivar: _records


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomains:(id)arg0 records:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif