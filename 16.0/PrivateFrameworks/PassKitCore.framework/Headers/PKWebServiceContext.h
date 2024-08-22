// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWEBSERVICECONTEXT_H
#define PKWEBSERVICECONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKWebServiceContext : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg0 ;
+(id)contextWithArchive:(id)arg0 error:(*id)arg1 ;
-(BOOL)archiveAtPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)archiveAtPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif