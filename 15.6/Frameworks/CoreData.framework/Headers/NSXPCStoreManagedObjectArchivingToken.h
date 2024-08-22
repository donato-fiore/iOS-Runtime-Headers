// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSXPCSTOREMANAGEDOBJECTARCHIVINGTOKEN_H
#define NSXPCSTOREMANAGEDOBJECTARCHIVINGTOKEN_H

@class NSURL;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding>

 {
    NSURL *_managedObjectReferenceURI;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)URI;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURI:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif