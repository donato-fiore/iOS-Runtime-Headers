// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFKEYCHAINDATAATTRIBUTES_H
#define SFKEYCHAINDATAATTRIBUTES_H

@class NSString;
@protocol SFKeychainItemAttributes;

#import <Foundation/Foundation.h>


@interface SFKeychainDataAttributes : NSObject <SFKeychainItemAttributes>

 {
    id *_keychainDataAttributesInternal;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif