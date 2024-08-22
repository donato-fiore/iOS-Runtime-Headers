// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSSHHOSTCONFIG_H
#define NMSSHHOSTCONFIG_H

@class NSArray, NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface NMSSHHostConfig : NSObject

@property (retain, nonatomic) NSArray *hostPatterns; // ivar: _hostPatterns
@property (retain, nonatomic) NSString *hostname; // ivar: _hostname
@property (retain, nonatomic) NSArray *identityFiles; // ivar: _identityFiles
@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (retain, nonatomic) NSString *user; // ivar: _user


-(id)arrayByRemovingDuplicateElementsFromArray:(id)arg0 ;
-(id)init;
-(id)mergedArray:(id)arg0 withArray:(id)arg1 ;
-(void)mergeFrom:(id)arg0 ;


@end


#endif