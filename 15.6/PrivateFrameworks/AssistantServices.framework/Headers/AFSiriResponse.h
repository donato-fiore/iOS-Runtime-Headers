// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSIRIRESPONSE_H
#define AFSIRIRESPONSE_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSiriResponse : NSObject <NSSecureCoding>

 {
    NSUUID *_requestIdentifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_isForRequest:(id)arg0 ;
-(id)_initWithRequest:(id)arg0 ;
-(id)_initWithRequestIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif