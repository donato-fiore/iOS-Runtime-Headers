// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETTINGSCLIENTBOOKMARK_H
#define WFSETTINGSCLIENTBOOKMARK_H

@protocol NSSecureCoding, BMBookmark;

#import <Foundation/Foundation.h>


@interface WFSettingsClientBookmark : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<BMBookmark> *biomeBookmark; // ivar: _biomeBookmark


+(BOOL)supportsSecureCoding;
-(id)actionReversalState;
-(id)initWithActionReversalState:(id)arg0 ;
-(id)initWithBiomeBookmark:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif