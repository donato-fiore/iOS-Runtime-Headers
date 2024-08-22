// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXTERNALELEMENT_H
#define PKEXTERNALELEMENT_H


#import <Foundation/Foundation.h>


@interface PKExternalElement : NSObject {
    CGRect _boundingBox;
}


@property (readonly, nonatomic) CGRect boundingBox;
@property (readonly, nonatomic) id *identifier; // ivar: _identifier
@property (readonly, nonatomic) *CGPath path; // ivar: _path


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 path:(struct CGPath *)arg1 ;
-(void)dealloc;


@end


#endif