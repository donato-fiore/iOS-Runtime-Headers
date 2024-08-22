// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSDECLARATIONLIST_H
#define IKCSSDECLARATIONLIST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKMutableArray.h"

@interface IKCSSDeclarationList : NSObject <NSCopying>



@property (readonly, nonatomic) IKMutableArray *declarations; // ivar: _declarations
@property (nonatomic) _NSRange range; // ivar: _range


-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)declarationAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)firstDeclaration;
-(id)init;
-(id)lastDeclaration;
-(void)addDeclaration:(id)arg0 ;


@end


#endif