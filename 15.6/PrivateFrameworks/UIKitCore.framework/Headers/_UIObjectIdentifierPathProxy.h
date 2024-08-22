// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIOBJECTIDENTIFIERPATHPROXY_H
#define _UIOBJECTIDENTIFIERPATHPROXY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIObjectIdentifierPathProxy : NSObject <NSSecureCoding>

 {
    NSString *_identifierPath;
}




+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif