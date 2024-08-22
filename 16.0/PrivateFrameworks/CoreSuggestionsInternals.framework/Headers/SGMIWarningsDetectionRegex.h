// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIWARNINGSDETECTIONREGEX_H
#define SGMIWARNINGSDETECTIONREGEX_H

@class NSRegularExpression, NSNumber;



@interface SGMIWarningsDetectionRegex : NSRegularExpression

@property (readonly, nonatomic) NSNumber *privateGroupsCount; // ivar: _privateGroupsCount


+(id)hashedValueOfString:(id)arg0 ;
-(id)description;
-(id)initWithPattern:(id)arg0 ;
-(id)matchForString:(id)arg0 ;
-(id)matchForString:(id)arg0 withinRange:(struct _NSRange )arg1 ;
-(id)matchesForString:(id)arg0 ;
-(id)matchesForString:(id)arg0 withinRange:(struct _NSRange )arg1 onlyFirstMatch:(BOOL)arg2 ;


@end


#endif