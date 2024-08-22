// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT13SIGNATUREITEM_H
#define _TTC8PAPERKIT13SIGNATUREITEM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit13SignatureItem : NSObject <NSSecureCoding>

 {
    ? uniqueID;
    ? baselineOffset;
    ? creationDate;
    ? shouldPersist;
    ? signatureDescription;
    ? path;
    ? drawing;
    ? isOwned;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif