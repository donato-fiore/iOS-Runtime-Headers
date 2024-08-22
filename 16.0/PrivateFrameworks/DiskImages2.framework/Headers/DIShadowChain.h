// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DISHADOWCHAIN_H
#define DISHADOWCHAIN_H

@class NSURL, NSArray, NSMutableArray;
@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>


@interface DIShadowChain : NSObject <NSSecureCoding, NSCoding>



@property (readonly, nonatomic) NSURL *activeURL;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSArray *mountPoints;
@property (readonly, nonatomic) NSArray *shadowBackends; // ivar: _shadowBackends
@property (readonly, nonatomic) NSArray *shadowStats; // ivar: _shadowStats
@property (readonly, nonatomic) NSMutableArray *shadowURLs; // ivar: _shadowURLs


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)openWritable:(BOOL)arg0 ;
-(id)statWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif