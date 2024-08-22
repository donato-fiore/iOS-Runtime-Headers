// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANHOMECONTEXT_H
#define ANHOMECONTEXT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ANHomeContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *homeName; // ivar: _homeName
@property (nonatomic) BOOL isEmpty; // ivar: _isEmpty
@property (retain, nonatomic) NSArray *roomNames; // ivar: _roomNames
@property (retain, nonatomic) NSArray *zoneNames; // ivar: _zoneNames


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif