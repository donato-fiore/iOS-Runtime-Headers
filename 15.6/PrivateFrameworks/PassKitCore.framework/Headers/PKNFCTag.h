// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKNFCTAG_H
#define PKNFCTAG_H

@class NFTag, NSData;

#import <Foundation/Foundation.h>


@interface PKNFCTag : NSObject {
    NFTag *_underlyingTag;
}


@property (copy, nonatomic) NSData *UID; // ivar: _UID
@property (copy, nonatomic) NSData *manufacturerIdentifier; // ivar: _manufacturerIdentifier
@property (copy, nonatomic) NSData *manufacturerParameter; // ivar: _manufacturerParameter
@property (copy, nonatomic) NSData *systemCode; // ivar: _systemCode
@property (copy, nonatomic) NSData *tagIdentifier; // ivar: _tagIdentifier
@property (nonatomic) NSUInteger technology; // ivar: _technology


-(id)initWithNFTag:(id)arg0 ;


@end


#endif