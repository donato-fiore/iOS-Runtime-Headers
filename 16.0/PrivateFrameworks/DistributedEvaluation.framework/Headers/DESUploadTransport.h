// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DESUPLOADTRANSPORT_H
#define DESUPLOADTRANSPORT_H

@class NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DESUploadTransport : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL dediscoRoute; // ivar: _dediscoRoute
@property (readonly, nonatomic) BOOL originRoute; // ivar: _originRoute
@property (readonly, nonatomic) BOOL parsecRoute; // ivar: _parsecRoute
@property (readonly, copy, nonatomic) NSURL *postBackBaseURL; // ivar: _postBackBaseURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDediscoRoute:(BOOL)arg0 originRoute:(BOOL)arg1 parsecRoute:(BOOL)arg2 postBackBaseURL:(id)arg3 ;
-(id)initWithPolicy:(id)arg0 recipe:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif