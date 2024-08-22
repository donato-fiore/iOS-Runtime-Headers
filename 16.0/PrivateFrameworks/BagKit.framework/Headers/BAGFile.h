// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BAGFILE_H
#define BAGFILE_H

@class NSString, NSData;
@protocol NSSecureCoding, BAGResource;

#import <Foundation/Foundation.h>

#import "BAGResourceOptions.h"

@interface BAGFile : NSObject <NSSecureCoding, BAGResource>



@property (retain, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BAGResourceOptions *options; // ivar: _options
@property (retain, nonatomic) NSData *resource; // ivar: _resource
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 contentType:(id)arg1 options:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif