// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIDICIPROFILE_H
#define MIDICIPROFILE_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MIDICIProfile : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *name; // ivar: name
@property (readonly, nonatomic) NSData *profileID; // ivar: profileID


+(BOOL)supportsSecureCoding;
+(id)description;
-(*void)bytes;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 name:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif