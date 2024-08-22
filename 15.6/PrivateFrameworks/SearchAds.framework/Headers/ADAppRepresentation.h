// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADAPPREPRESENTATION_H
#define ADAPPREPRESENTATION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ADAppRepresentation : NSObject

@property (retain, nonatomic) NSString *adamID; // ivar: _adamID
@property (retain, nonatomic) NSDictionary *assetInformation; // ivar: _assetInformation


-(id)initWithAdamID:(id)arg0 ;
-(id)initWithAdamID:(id)arg0 assetInformation:(id)arg1 ;


@end


#endif