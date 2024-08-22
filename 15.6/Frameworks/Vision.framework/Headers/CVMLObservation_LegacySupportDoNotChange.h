// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVMLOBSERVATION_LEGACYSUPPORTDONOTCHANGE_H
#define CVMLOBSERVATION_LEGACYSUPPORTDONOTCHANGE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVMLObservation_LegacySupportDoNotChange : NSObject <NSSecureCoding>

 {
    float _confidence;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 forKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif